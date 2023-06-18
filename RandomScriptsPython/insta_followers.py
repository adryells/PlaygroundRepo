import instaloader
import csv

from loguru import logger

L = instaloader.Instaloader()

username = "USERNAME"
password = "PASSWORD"

L.login(username, password)

profile = instaloader.Profile.from_username(L.context, username)

followers_list = set(profile.get_followers())

following_list = set(profile.get_followees())

trairas = list(following_list - followers_list)

fui_mlk = list(followers_list - following_list)


def generate_csv_file(file_name: str, items: list, option: str = "w"):
    total_items = len(items)

    with open(file_name, option) as file:
        writer = csv.writer(file)

        for index, item in enumerate(items, start=1):
            logger.info(f"{index}/{total_items} - {item.username}")
            writer.writerow([item.username])


if __name__ == "__main__":
    generate_csv_file(file_name="naosigo.csv", items=fui_mlk)
    generate_csv_file(file_name="naomeseguem.csv", items=trairas)

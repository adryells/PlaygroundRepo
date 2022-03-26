import smtplib
from email.mime.text import MIMEText

HOST_SMTP = input(
    """Insert the host from your email client\n
    example: Google (smtp.gmail.com).
    \n:"""
)

PORT_SMTP = input(
    """Insert the smtp port from your email client\n
    example: Google is 587.
    """
)

server = smtplib.SMTP(host=HOST_SMTP, port=PORT_SMTP)

server.starttls()

MY_EMAIL = input("Your email here: ")
PASSWORD = input("Your password here: ")

server.login(MY_EMAIL, PASSWORD)
message = MIMEText(input(
    """
    Insert here the body message: 
    """
))

message['From'] = MY_EMAIL
message['To'] = input("""
    insert here the email from the receiver: 
""")
message['Subject'] = input(
    """
    insert here the title from message: 
    """
)

server.send_message(message)

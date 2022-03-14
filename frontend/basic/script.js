var main_section = document.getElementById('projects');
projects = [
	"projects/caxias/index.html",
	"projects/calculatorjs/index.html",
	"projects/eureka/index.html",
	"projects/pagestyleconfigurator/index.html",
]

titles = [
	"caxias", "calculatorJS", "Eureka", "PageStyleConfigurator"
]

function add_project_blocks() {
	for (var i = 0; i < projects.length; i++) {
		let project = document.createElement('div');
		let title = document.createElement('h3');
		let link = document.createElement('a')
		link.setAttribute('href', projects[i])
		let text = document.createTextNode(titles[i])

		title.appendChild(text)
		project.appendChild(title)
		link.appendChild(project)
		main_section.appendChild(link);

		project.setAttribute('class', 'project')
	}
}

add_project_blocks()
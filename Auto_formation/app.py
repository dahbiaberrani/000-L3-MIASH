from flask import Flask, render_template

app = Flask(__name__)


@app.route("/getstatus")
def index():
    return "status"


@app.route("/about/")
def about():
    return "about"


if __name__ == "__main__":
    app.run(debug=True)

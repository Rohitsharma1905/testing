import tkinter as tk

def on_button_click():
    label.config(text="Button Clicked!")

root = tk.Tk()
root.title("Labels and Buttons")

label = tk.Label(root, text="Hello, tkinter!", font=("Helvetica", 16))
label.pack(pady=10)

button = tk.Button(root, text="Click me", command=on_button_click, relief=tk.RAISED)
button.pack(pady=10)

root.mainloop()

from django.shortcuts import render, redirect
from . import arduled

# Create your views here.
def hi(request):
    return render(request, 'HOMELEDAPP/hi.html')

def rele(request):
    arduled.rele()
    return redirect('/main')

def led(request):
    arduled.led()
    return redirect('/main')

def ledv(request):
    arduled.ledv()
    return redirect('/main')


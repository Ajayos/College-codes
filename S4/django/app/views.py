from django.shortcuts import render,redirect
from . forms import *
from . models import *

from django.contrib import messages
# Create your views here.

def index(request):
    return render(request,'index.html')

def login(request):
    return render(request,'login.html')

def log(request):
    return render(request,'log.html')

def woogle(request):
    return render(request,'woogle.html')


def register(request):
    form=RegisterForm()
    dict={'form':form}
    if request.method=="POST":
        form=RegisterForm(request.POST)
        if form.is_valid():
            user=form.save()
            messages.success(request,"succeessfull")
    return render(request,'register.html',dict)
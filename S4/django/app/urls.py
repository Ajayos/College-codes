from django.urls import path

from .import views 

urlpatterns = [
    path('',views.log,name="index"),
    path('log/',views.log,name="log"),
    path('register/',views.register,name="register"),
    path('login/',views.login,name="login"),
    path('woogle/',views.woogle,name="woogle"),
]
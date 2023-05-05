from django.db import models

# Create your models here.

class posts(models.Model):
    title=models.CharField(max_length=20)
    content=models.CharField(max_length=40)

class feedbacks(models.Model):
    heading=models.CharField(max_length=20)
    content=models.CharField(max_length=40)
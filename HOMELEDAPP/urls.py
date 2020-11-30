from django.urls import path
from . import views

urlpatterns = [
    path('main', views.hi, name='hi'),
    path('command', views.rele, name='rele'),
    path('led', views.led, name='led'),
    path('ledv', views.ledv, name='ledv')

]
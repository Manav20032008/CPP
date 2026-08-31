import requests

base = "https://codeforces.com/group/nmgprSAgxj/contest/{}"

for contest_id in range(712105, 712116):
    url = base.format(contest_id)

    response = requests.get(
        url,
        headers={"User-Agent": "Mozilla/5.0"},
        timeout=10
    )

    if response.status_code == 200:
        print("Accessible:", url)
    else:
        print("Not accessible:", contest_id, response.status_code)
#include <bits/stdc++.h>
using namespace std;

class JobQueue
{
private:
    int num_workers_;
    vector<int> jobs_;

    vector<int> assigned_workers_;
    vector<long long> start_times_;
    struct t
    {
        int id;
        long long next_free_time;
        t(int id, long long t = 0) : id(id), next_free_time(t){};
        void addtime(long long t) { next_free_time += t; }
        friend bool operator<(const t &b, const t &a)
        {
            if (b.next_free_time != a.next_free_time)
                return b.next_free_time > a.next_free_time;
            else
                return b.id > a.id;
        }
    };
    void write() const
    {
        for (int i = 0; i < jobs_.size(); ++i)
        {
            cout << assigned_workers_[i] << " " << start_times_[i] << "\n";
        }
    }

    void read()
    {
        int m;
        cin >> num_workers_ >> m;
        jobs_.resize(m);
        for (int i = 0; i < m; ++i)
            cin >> jobs_[i];
    }

    void assignwork()
    {
        assigned_workers_.resize(jobs_.size());
        start_times_.resize(jobs_.size());
        priority_queue<t, vector<t>> q;
        for (int i = 0; i < num_workers_; i++)
        {
            q.push(t(i));
        }
        for (int i = 0; i < jobs_.size(); ++i)
        {
            int duration = jobs_[i];
            t td = q.top();
            q.pop();
            assigned_workers_[i] = td.id;
            start_times_[i] = td.next_free_time;
            td.next_free_time += duration;
            q.push(td);
        }
    }

public:
    void Solve()
    {
        read();
        assignwork();
        write();
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    JobQueue job_queue;
    job_queue.Solve();
    return 0;
}
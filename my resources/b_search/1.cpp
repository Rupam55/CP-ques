int l = i + 1, r = n - 1, ans = -1;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (dist[mid] + dist[i] > 0)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else
                    l = mid + 1;
            }
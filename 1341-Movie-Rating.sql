SELECT name AS results
FROM (
    SELECT u.name
    FROM Users u
    JOIN MovieRating m ON u.user_id = m.user_id
    GROUP BY u.user_id, u.name
    ORDER BY COUNT(m.movie_id) DESC, u.name
    LIMIT 1
) a

UNION ALL

SELECT title
FROM (
    SELECT r.title
    FROM Movies r
    JOIN MovieRating v ON v.movie_id = r.movie_id
    WHERE v.created_at >= '2020-02-01'
      AND v.created_at < '2020-03-01'
    GROUP BY r.movie_id, r.title
    ORDER BY AVG(v.rating) DESC, r.title
    LIMIT 1
) b;
--Viết câu lệnh SQL để lấy tất cả các dữ liệu từ bảng employees.
SELECT * FROM employees;
--Viết câu lệnh SQL để lấy tên và lương của mỗi nhân viên từ bảng employees.
SELECT first_name, salary FROM employees;
--Viết câu lệnh SQL để lấy tất cả các nhân viên có lương lớn hơn 5000 từ bảng employees.
SELECT * FROM employees WHERE salary > 5000;
--Viết câu lệnh SQL để lấy tất cả các nhân viên có tên bắt đầu bằng chữ ‘A’ từ bảng employees.
SELECT * FROM employees WHERE first_name LIKE 'A%';
--Giả sử có hai bảng employees và departments. Viết câu lệnh SQL để lấy danh sách các nhân viên cùng với tên phòng ban của họ.
SELECT e.*, d.department_name
FROM employees e
INNER JOIN departments d ON e.department_id = d.department_id;
--Viết câu lệnh SQL để lấy số lượng nhân viên trong mỗi phòng ban từ bảng employees.
SELECT department_id, COUNT(*) as employee_count
FROM employees
GROUP BY department_id;

--Viết câu lệnh SQL để lấy các phòng ban có nhiều hơn 10 nhân viên từ bảng employees.
SELECT department_id
FROM employees
GROUP BY department_id
HAVING COUNT(employee_id) > 10;

--Viết câu lệnh SQL để thêm một nhân viên mới vào bảng employees.
INSERT INTO employees (employee_id, first_name, last_name, email, phone_number, hire_date, job_id, salary, commission_pct, manager_id, department_id)
VALUES (10, 'Duc Anh', 'Tran', 'admin@thk.icu', '0332234309', '2024-01-22', '12', 3000000, 0.1, '15', '20');

--Viết câu lệnh SQL để tăng lương cho tất cả các nhân viên trong bảng employees lên 10%.
UPDATE employees SET salary = salary * 1.1;

--Viết câu lệnh SQL để xóa nhân viên có ID là 10 từ bảng employees.
DELETE FROM employees WHERE employee_id = 10;

1. Mô tả dự án
Hệ thống giám sát nhiệt độ sử dụng cảm biến LM35 kết nối với Arduino. Dữ liệu được truyền qua giao tiếp Serial và hiển thị trực quan.

2. Tính năng
- Đọc nhiệt độ từ đa kênh cảm biến (A0, A1, A2).
- Xuất dữ liệu định dạng JSON để dễ dàng xử lý trên máy tính.
- Cấu trúc thư mục dự án chuẩn Git.

3. Danh sách linh kiện
| Linh kiện | Số lượng | Ghi chú |
|-----------|----------|---------|
| Arduino UNO | 1 | Board mạch chính |
| Cảm biến LM35 | 3 | Cảm biến Analog |

4. Thành viên thực hiện
- Họ và tên: Chu Thành Đạt
- MSSV: N23DCCI011 
- Trang cá nhân: https://chuthanhdat25.github.io 

5. Hướng dẫn sử dụng
1. Nạp code trong thư mục `firmware/` vào Arduino.
2. Mở Serial Monitor để xem dữ liệu JSON.

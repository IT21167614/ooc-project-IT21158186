class app {
private:
int app_id;
string app_name;
string description;
string file_path;
public:
void app(int Id,string Name,string desc,string fpath);
void update_app_details();
void get_app_details();
}

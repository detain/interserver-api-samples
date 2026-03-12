part of swagger.api;

class ControlPanel {
  
  int id = null;

  String shortDesc = null;

  double monthlyPrice = null;

  ControlPanel();

  @override
  String toString() {
    return 'ControlPanel[id=$id, shortDesc=$shortDesc, monthlyPrice=$monthlyPrice, ]';
  }

  ControlPanel.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    id = json['id'];
    shortDesc = json['short_desc'];
    monthlyPrice = json['monthly_price'];
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'short_desc': shortDesc,
      'monthly_price': monthlyPrice
     };
  }

  static List<ControlPanel> listFromJson(List<dynamic> json) {
    return json == null ? new List<ControlPanel>() : json.map((value) => new ControlPanel.fromJson(value)).toList();
  }

  static Map<String, ControlPanel> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, ControlPanel>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new ControlPanel.fromJson(value));
    }
    return map;
  }
}

part of swagger.api;

class HardDrive {
  
  int id = null;

  String shortDesc = null;

  String size = null;

  String driveType = null;

  double monthlyPrice = null;

  String monthlyPriceDisplay = null;

  HardDrive();

  @override
  String toString() {
    return 'HardDrive[id=$id, shortDesc=$shortDesc, size=$size, driveType=$driveType, monthlyPrice=$monthlyPrice, monthlyPriceDisplay=$monthlyPriceDisplay, ]';
  }

  HardDrive.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    id = json['id'];
    shortDesc = json['short_desc'];
    size = json['size'];
    driveType = json['drive_type'];
    monthlyPrice = json['monthly_price'];
    monthlyPriceDisplay = json['monthly_price_display'];
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'short_desc': shortDesc,
      'size': size,
      'drive_type': driveType,
      'monthly_price': monthlyPrice,
      'monthly_price_display': monthlyPriceDisplay
     };
  }

  static List<HardDrive> listFromJson(List<dynamic> json) {
    return json == null ? new List<HardDrive>() : json.map((value) => new HardDrive.fromJson(value)).toList();
  }

  static Map<String, HardDrive> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, HardDrive>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new HardDrive.fromJson(value));
    }
    return map;
  }
}

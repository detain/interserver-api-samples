part of swagger.api;

class IpBlock {
  
  int id = null;

  String shortDesc = null;

  String qty = null;

  double monthlyPrice = null;

  IpBlock();

  @override
  String toString() {
    return 'IpBlock[id=$id, shortDesc=$shortDesc, qty=$qty, monthlyPrice=$monthlyPrice, ]';
  }

  IpBlock.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    id = json['id'];
    shortDesc = json['short_desc'];
    qty = json['qty'];
    monthlyPrice = json['monthly_price'];
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'short_desc': shortDesc,
      'qty': qty,
      'monthly_price': monthlyPrice
     };
  }

  static List<IpBlock> listFromJson(List<dynamic> json) {
    return json == null ? new List<IpBlock>() : json.map((value) => new IpBlock.fromJson(value)).toList();
  }

  static Map<String, IpBlock> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, IpBlock>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new IpBlock.fromJson(value));
    }
    return map;
  }
}

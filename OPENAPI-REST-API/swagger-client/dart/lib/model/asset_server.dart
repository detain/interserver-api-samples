part of swagger.api;

class AssetServer {
  
  int id = null;

  String region = null;

  String price = null;

  List<OneOfAssetServerCPUItems> CPU = [];

  List<OneOfAssetServerMemoryItems> memory = [];

  List<OneOfAssetServerBandwidthItems> bandwidth = [];

  List<OneOfAssetServerIPsItems> iPs = [];

  Map<String, String> HD = {};

  AssetServer();

  @override
  String toString() {
    return 'AssetServer[id=$id, region=$region, price=$price, CPU=$CPU, memory=$memory, bandwidth=$bandwidth, iPs=$iPs, HD=$HD, ]';
  }

  AssetServer.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    id = json['id'];
    region = json['Region'];
    price = json['price'];
    CPU = Object.listFromJson(json['CPU']);
    memory = Object.listFromJson(json['Memory']);
    bandwidth = Object.listFromJson(json['Bandwidth']);
    iPs = Object.listFromJson(json['IPs']);
    HD = json['HD'];
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'Region': region,
      'price': price,
      'CPU': CPU,
      'Memory': memory,
      'Bandwidth': bandwidth,
      'IPs': iPs,
      'HD': HD
     };
  }

  static List<AssetServer> listFromJson(List<dynamic> json) {
    return json == null ? new List<AssetServer>() : json.map((value) => new AssetServer.fromJson(value)).toList();
  }

  static Map<String, AssetServer> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, AssetServer>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new AssetServer.fromJson(value));
    }
    return map;
  }
}

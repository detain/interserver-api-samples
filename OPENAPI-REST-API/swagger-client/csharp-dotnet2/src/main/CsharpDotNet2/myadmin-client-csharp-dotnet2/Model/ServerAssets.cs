using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class ServerAssets {
    /// <summary>
    /// The title of the assets.
    /// </summary>
    /// <value>The title of the assets.</value>
    [DataMember(Name="title", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "title")]
    public string Title { get; set; }

    /// <summary>
    /// The size of the assets.
    /// </summary>
    /// <value>The size of the assets.</value>
    [DataMember(Name="size", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "size")]
    public int? Size { get; set; }

    /// <summary>
    /// The type of the assets.
    /// </summary>
    /// <value>The type of the assets.</value>
    [DataMember(Name="type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "type")]
    public string Type { get; set; }

    /// <summary>
    /// The header of the assets table.
    /// </summary>
    /// <value>The header of the assets table.</value>
    [DataMember(Name="header", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "header")]
    public List<string> Header { get; set; }

    /// <summary>
    /// The rows of the assets table.
    /// </summary>
    /// <value>The rows of the assets table.</value>
    [DataMember(Name="rows", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rows")]
    public List<List<string>> Rows { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerAssets {\n");
      sb.Append("  Title: ").Append(Title).Append("\n");
      sb.Append("  Size: ").Append(Size).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Header: ").Append(Header).Append("\n");
      sb.Append("  Rows: ").Append(Rows).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}

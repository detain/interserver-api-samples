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
  public class InlineResponse2012OrderDetailsCjParams {
    /// <summary>
    /// Gets or Sets ContainerTagId
    /// </summary>
    [DataMember(Name="containerTagId", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "containerTagId")]
    public int? ContainerTagId { get; set; }

    /// <summary>
    /// Gets or Sets CID
    /// </summary>
    [DataMember(Name="CID", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "CID")]
    public int? CID { get; set; }

    /// <summary>
    /// Gets or Sets OID
    /// </summary>
    [DataMember(Name="OID", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "OID")]
    public string OID { get; set; }

    /// <summary>
    /// Gets or Sets TYPE
    /// </summary>
    [DataMember(Name="TYPE", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "TYPE")]
    public int? TYPE { get; set; }

    /// <summary>
    /// Gets or Sets ITEM1
    /// </summary>
    [DataMember(Name="ITEM1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ITEM1")]
    public string ITEM1 { get; set; }

    /// <summary>
    /// Gets or Sets AMT1
    /// </summary>
    [DataMember(Name="AMT1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "AMT1")]
    public int? AMT1 { get; set; }

    /// <summary>
    /// Gets or Sets QTY1
    /// </summary>
    [DataMember(Name="QTY1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "QTY1")]
    public int? QTY1 { get; set; }

    /// <summary>
    /// Gets or Sets CURRENCY
    /// </summary>
    [DataMember(Name="CURRENCY", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "CURRENCY")]
    public string CURRENCY { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class InlineResponse2012OrderDetailsCjParams {\n");
      sb.Append("  ContainerTagId: ").Append(ContainerTagId).Append("\n");
      sb.Append("  CID: ").Append(CID).Append("\n");
      sb.Append("  OID: ").Append(OID).Append("\n");
      sb.Append("  TYPE: ").Append(TYPE).Append("\n");
      sb.Append("  ITEM1: ").Append(ITEM1).Append("\n");
      sb.Append("  AMT1: ").Append(AMT1).Append("\n");
      sb.Append("  QTY1: ").Append(QTY1).Append("\n");
      sb.Append("  CURRENCY: ").Append(CURRENCY).Append("\n");
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

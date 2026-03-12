using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// The settings for a module.
  /// </summary>
  [DataContract]
  public class ModuleSettings {
    /// <summary>
    /// Gets or Sets SERVICE_ID_OFFSET
    /// </summary>
    [DataMember(Name="SERVICE_ID_OFFSET", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "SERVICE_ID_OFFSET")]
    public int? SERVICE_ID_OFFSET { get; set; }

    /// <summary>
    /// Gets or Sets USE_REPEAT_INVOICE
    /// </summary>
    [DataMember(Name="USE_REPEAT_INVOICE", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "USE_REPEAT_INVOICE")]
    public bool? USE_REPEAT_INVOICE { get; set; }

    /// <summary>
    /// Gets or Sets USE_PACKAGES
    /// </summary>
    [DataMember(Name="USE_PACKAGES", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "USE_PACKAGES")]
    public bool? USE_PACKAGES { get; set; }

    /// <summary>
    /// Gets or Sets BILLING_DAYS_OFFSET
    /// </summary>
    [DataMember(Name="BILLING_DAYS_OFFSET", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "BILLING_DAYS_OFFSET")]
    public int? BILLING_DAYS_OFFSET { get; set; }

    /// <summary>
    /// Gets or Sets IMGNAME
    /// </summary>
    [DataMember(Name="IMGNAME", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "IMGNAME")]
    public string IMGNAME { get; set; }

    /// <summary>
    /// Gets or Sets REPEAT_BILLING_METHOD
    /// </summary>
    [DataMember(Name="REPEAT_BILLING_METHOD", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "REPEAT_BILLING_METHOD")]
    public int? REPEAT_BILLING_METHOD { get; set; }

    /// <summary>
    /// Gets or Sets DELETE_PENDING_DAYS
    /// </summary>
    [DataMember(Name="DELETE_PENDING_DAYS", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "DELETE_PENDING_DAYS")]
    public int? DELETE_PENDING_DAYS { get; set; }

    /// <summary>
    /// Gets or Sets SUSPEND_DAYS
    /// </summary>
    [DataMember(Name="SUSPEND_DAYS", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "SUSPEND_DAYS")]
    public int? SUSPEND_DAYS { get; set; }

    /// <summary>
    /// Gets or Sets SUSPEND_WARNING_DAYS
    /// </summary>
    [DataMember(Name="SUSPEND_WARNING_DAYS", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "SUSPEND_WARNING_DAYS")]
    public int? SUSPEND_WARNING_DAYS { get; set; }

    /// <summary>
    /// Gets or Sets TITLE
    /// </summary>
    [DataMember(Name="TITLE", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "TITLE")]
    public string TITLE { get; set; }

    /// <summary>
    /// Gets or Sets MENUNAME
    /// </summary>
    [DataMember(Name="MENUNAME", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "MENUNAME")]
    public string MENUNAME { get; set; }

    /// <summary>
    /// Gets or Sets EMAIL_FROM
    /// </summary>
    [DataMember(Name="EMAIL_FROM", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "EMAIL_FROM")]
    public string EMAIL_FROM { get; set; }

    /// <summary>
    /// Gets or Sets TBLNAME
    /// </summary>
    [DataMember(Name="TBLNAME", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "TBLNAME")]
    public string TBLNAME { get; set; }

    /// <summary>
    /// Gets or Sets TABLE
    /// </summary>
    [DataMember(Name="TABLE", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "TABLE")]
    public string TABLE { get; set; }

    /// <summary>
    /// Gets or Sets TITLE_FIELD
    /// </summary>
    [DataMember(Name="TITLE_FIELD", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "TITLE_FIELD")]
    public string TITLE_FIELD { get; set; }

    /// <summary>
    /// Gets or Sets TITLEFIELD2
    /// </summary>
    [DataMember(Name="TITLE_FIELD2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "TITLE_FIELD2")]
    public string TITLEFIELD2 { get; set; }

    /// <summary>
    /// Gets or Sets TITLEFIELD3
    /// </summary>
    [DataMember(Name="TITLE_FIELD3", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "TITLE_FIELD3")]
    public string TITLEFIELD3 { get; set; }

    /// <summary>
    /// Gets or Sets PREFIX
    /// </summary>
    [DataMember(Name="PREFIX", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "PREFIX")]
    public string PREFIX { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ModuleSettings {\n");
      sb.Append("  SERVICE_ID_OFFSET: ").Append(SERVICE_ID_OFFSET).Append("\n");
      sb.Append("  USE_REPEAT_INVOICE: ").Append(USE_REPEAT_INVOICE).Append("\n");
      sb.Append("  USE_PACKAGES: ").Append(USE_PACKAGES).Append("\n");
      sb.Append("  BILLING_DAYS_OFFSET: ").Append(BILLING_DAYS_OFFSET).Append("\n");
      sb.Append("  IMGNAME: ").Append(IMGNAME).Append("\n");
      sb.Append("  REPEAT_BILLING_METHOD: ").Append(REPEAT_BILLING_METHOD).Append("\n");
      sb.Append("  DELETE_PENDING_DAYS: ").Append(DELETE_PENDING_DAYS).Append("\n");
      sb.Append("  SUSPEND_DAYS: ").Append(SUSPEND_DAYS).Append("\n");
      sb.Append("  SUSPEND_WARNING_DAYS: ").Append(SUSPEND_WARNING_DAYS).Append("\n");
      sb.Append("  TITLE: ").Append(TITLE).Append("\n");
      sb.Append("  MENUNAME: ").Append(MENUNAME).Append("\n");
      sb.Append("  EMAIL_FROM: ").Append(EMAIL_FROM).Append("\n");
      sb.Append("  TBLNAME: ").Append(TBLNAME).Append("\n");
      sb.Append("  TABLE: ").Append(TABLE).Append("\n");
      sb.Append("  TITLE_FIELD: ").Append(TITLE_FIELD).Append("\n");
      sb.Append("  TITLEFIELD2: ").Append(TITLEFIELD2).Append("\n");
      sb.Append("  TITLEFIELD3: ").Append(TITLEFIELD3).Append("\n");
      sb.Append("  PREFIX: ").Append(PREFIX).Append("\n");
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

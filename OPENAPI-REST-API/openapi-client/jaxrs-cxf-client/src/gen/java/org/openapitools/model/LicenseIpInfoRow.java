package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A single row in the license IP information table.
 */
@ApiModel(description="A single row in the license IP information table.")

public class LicenseIpInfoRow  {
  
 /**
  * Row description
  */
  @ApiModelProperty(example = "Netmask", value = "Row description")

  private String desc;

 /**
  * Row value
  */
  @ApiModelProperty(example = "255.255.255.248", value = "Row value")

  private String value;
 /**
   * Row description
   * @return desc
  **/
  @JsonProperty("desc")
  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public LicenseIpInfoRow desc(String desc) {
    this.desc = desc;
    return this;
  }

 /**
   * Row value
   * @return value
  **/
  @JsonProperty("value")
  public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public LicenseIpInfoRow value(String value) {
    this.value = value;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicenseIpInfoRow licenseIpInfoRow = (LicenseIpInfoRow) o;
    return Objects.equals(this.desc, licenseIpInfoRow.desc) &&
        Objects.equals(this.value, licenseIpInfoRow.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(desc, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicenseIpInfoRow {\n");
    
    sb.append("    desc: ").append(toIndentedString(desc)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


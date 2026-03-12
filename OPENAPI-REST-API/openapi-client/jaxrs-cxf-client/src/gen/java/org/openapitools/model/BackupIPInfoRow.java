package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A single row in the backup IP information table.
 */
@ApiModel(description="A single row in the backup IP information table.")

public class BackupIPInfoRow  {
  
 /**
  * Description of the IP information.
  */
  @ApiModelProperty(example = "Netmask", value = "Description of the IP information.")

  private String desc;

 /**
  * Value of the IP information.
  */
  @ApiModelProperty(example = "255.255.255.248", value = "Value of the IP information.")

  private String value;
 /**
   * Description of the IP information.
   * @return desc
  **/
  @JsonProperty("desc")
  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public BackupIPInfoRow desc(String desc) {
    this.desc = desc;
    return this;
  }

 /**
   * Value of the IP information.
   * @return value
  **/
  @JsonProperty("value")
  public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public BackupIPInfoRow value(String value) {
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
    BackupIPInfoRow backupIPInfoRow = (BackupIPInfoRow) o;
    return Objects.equals(this.desc, backupIPInfoRow.desc) &&
        Objects.equals(this.value, backupIPInfoRow.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(desc, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupIPInfoRow {\n");
    
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


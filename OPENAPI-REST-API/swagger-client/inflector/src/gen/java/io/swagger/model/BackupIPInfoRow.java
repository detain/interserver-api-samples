package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A single row in the backup IP information table.
 **/
@Schema(description = "A single row in the backup IP information table.")


public class BackupIPInfoRow   {
  @JsonProperty("desc")
  private String desc = null;
  @JsonProperty("value")
  private String value = null;
  /**
   * Description of the IP information.
   **/
  public BackupIPInfoRow desc(String desc) {
    this.desc = desc;
    return this;
  }

  
  @Schema(example = "Netmask", description = "Description of the IP information.")
  @JsonProperty("desc")
  public String getDesc() {
    return desc;
  }
  public void setDesc(String desc) {
    this.desc = desc;
  }

  /**
   * Value of the IP information.
   **/
  public BackupIPInfoRow value(String value) {
    this.value = value;
    return this;
  }

  
  @Schema(example = "255.255.255.248", description = "Value of the IP information.")
  @JsonProperty("value")
  public String getValue() {
    return value;
  }
  public void setValue(String value) {
    this.value = value;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupIPInfoRow backupIPInfoRow = (BackupIPInfoRow) o;
    return Objects.equals(desc, backupIPInfoRow.desc) &&
        Objects.equals(value, backupIPInfoRow.value);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

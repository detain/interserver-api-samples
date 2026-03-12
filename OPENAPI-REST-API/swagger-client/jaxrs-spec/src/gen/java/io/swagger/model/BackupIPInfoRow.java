package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A single row in the backup IP information table.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A single row in the backup IP information table.")

public class BackupIPInfoRow   {

  private @Valid String desc = null;

  private @Valid String value = null;

  /**
   * Description of the IP information.
   **/
  public BackupIPInfoRow desc(String desc) {
    this.desc = desc;
    return this;
  }

  
  @ApiModelProperty(example = "Netmask", value = "Description of the IP information.")
  @JsonProperty("desc")
  @NotNull

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

  
  @ApiModelProperty(example = "255.255.255.248", value = "Value of the IP information.")
  @JsonProperty("value")
  @NotNull

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

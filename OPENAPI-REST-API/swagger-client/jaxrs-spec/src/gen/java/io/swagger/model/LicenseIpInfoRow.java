package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A single row in the license IP information table.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A single row in the license IP information table.")

public class LicenseIpInfoRow   {

  private @Valid String desc = null;

  private @Valid String value = null;

  /**
   * Row description
   **/
  public LicenseIpInfoRow desc(String desc) {
    this.desc = desc;
    return this;
  }

  
  @ApiModelProperty(example = "Netmask", value = "Row description")
  @JsonProperty("desc")
  @NotNull

  public String getDesc() {
    return desc;
  }
  public void setDesc(String desc) {
    this.desc = desc;
  }

  /**
   * Row value
   **/
  public LicenseIpInfoRow value(String value) {
    this.value = value;
    return this;
  }

  
  @ApiModelProperty(example = "255.255.255.248", value = "Row value")
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
    LicenseIpInfoRow licenseIpInfoRow = (LicenseIpInfoRow) o;
    return Objects.equals(desc, licenseIpInfoRow.desc) &&
        Objects.equals(value, licenseIpInfoRow.value);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

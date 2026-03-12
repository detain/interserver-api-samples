package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The request to update the time zone of a vps.
 */
@ApiModel(description="The request to update the time zone of a vps.")

public class TimezoneUpdate  {
  
 /**
  * The time zone
  */
  @ApiModelProperty(example = "America/New_York", required = true, value = "The time zone")

  private String timezone;
 /**
   * The time zone
   * @return timezone
  **/
  @JsonProperty("timezone")
  public String getTimezone() {
    return timezone;
  }

  public void setTimezone(String timezone) {
    this.timezone = timezone;
  }

  public TimezoneUpdate timezone(String timezone) {
    this.timezone = timezone;
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
    TimezoneUpdate timezoneUpdate = (TimezoneUpdate) o;
    return Objects.equals(this.timezone, timezoneUpdate.timezone);
  }

  @Override
  public int hashCode() {
    return Objects.hash(timezone);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TimezoneUpdate {\n");
    
    sb.append("    timezone: ").append(toIndentedString(timezone)).append("\n");
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


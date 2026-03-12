package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * The request to update the time zone of a vps.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "The request to update the time zone of a vps.")

public class TimezoneUpdate   {
  private String timezone = null;

  /**
   * The time zone
   **/
  public TimezoneUpdate timezone(String timezone) {
    this.timezone = timezone;
    return this;
  }

  
  
  @Schema(example = "America/New_York", required = true, description = "The time zone")
  @JsonProperty("timezone")
  @NotNull
  public String getTimezone() {
    return timezone;
  }
  public void setTimezone(String timezone) {
    this.timezone = timezone;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TimezoneUpdate timezoneUpdate = (TimezoneUpdate) o;
    return Objects.equals(timezone, timezoneUpdate.timezone);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

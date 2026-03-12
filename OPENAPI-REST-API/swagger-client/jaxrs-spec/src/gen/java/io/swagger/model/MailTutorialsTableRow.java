package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A single tutorial entry with a label and URL.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A single tutorial entry with a label and URL.")

public class MailTutorialsTableRow   {

  private @Valid String desc = null;

  private @Valid String value = null;

  /**
   * The description of the tutorials table row.
   **/
  public MailTutorialsTableRow desc(String desc) {
    this.desc = desc;
    return this;
  }

  
  @ApiModelProperty(example = "cPanel Tutorial", value = "The description of the tutorials table row.")
  @JsonProperty("desc")
  @NotNull

  public String getDesc() {
    return desc;
  }
  public void setDesc(String desc) {
    this.desc = desc;
  }

  /**
   * The value of the tutorials table row.
   **/
  public MailTutorialsTableRow value(String value) {
    this.value = value;
    return this;
  }

  
  @ApiModelProperty(example = "<a class=\"link\" href=\"https://mail.baby/cpanel/\" target=\"_blank\">Click Here</a>", value = "The value of the tutorials table row.")
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
    MailTutorialsTableRow mailTutorialsTableRow = (MailTutorialsTableRow) o;
    return Objects.equals(desc, mailTutorialsTableRow.desc) &&
        Objects.equals(value, mailTutorialsTableRow.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(desc, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailTutorialsTableRow {\n");
    
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

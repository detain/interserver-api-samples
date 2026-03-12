package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A single tutorial entry with a label and URL.")

public class MailTutorialsTableRow   {
  private String desc = null;
  private String value = null;

  /**
   * The description of the tutorials table row.
   **/
  
  @Schema(example = "cPanel Tutorial", description = "The description of the tutorials table row.")
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
  
  @Schema(example = "<a class=\"link\" href=\"https://mail.baby/cpanel/\" target=\"_blank\">Click Here</a>", description = "The value of the tutorials table row.")
  @JsonProperty("value")
  @NotNull
  public String getValue() {
    return value;
  }
  public void setValue(String value) {
    this.value = value;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

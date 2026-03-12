package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class WebsiteTableRow   {
  @JsonProperty("desc")
  private String desc = null;
  @JsonProperty("value")
  private String value = null;
  /**
   * Description for the row
   **/
  public WebsiteTableRow desc(String desc) {
    this.desc = desc;
    return this;
  }

  
  @Schema(description = "Description for the row")
  @JsonProperty("desc")
  public String getDesc() {
    return desc;
  }
  public void setDesc(String desc) {
    this.desc = desc;
  }

  /**
   * Value for the row
   **/
  public WebsiteTableRow value(String value) {
    this.value = value;
    return this;
  }

  
  @Schema(description = "Value for the row")
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
    WebsiteTableRow websiteTableRow = (WebsiteTableRow) o;
    return Objects.equals(desc, websiteTableRow.desc) &&
        Objects.equals(value, websiteTableRow.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(desc, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteTableRow {\n");
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

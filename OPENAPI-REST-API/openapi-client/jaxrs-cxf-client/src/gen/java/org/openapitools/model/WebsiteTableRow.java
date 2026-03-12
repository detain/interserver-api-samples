package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class WebsiteTableRow  {
  
 /**
  * Description for the row
  */
  @ApiModelProperty(value = "Description for the row")

  private String desc;

 /**
  * Value for the row
  */
  @ApiModelProperty(value = "Value for the row")

  private String value;
 /**
   * Description for the row
   * @return desc
  **/
  @JsonProperty("desc")
  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public WebsiteTableRow desc(String desc) {
    this.desc = desc;
    return this;
  }

 /**
   * Value for the row
   * @return value
  **/
  @JsonProperty("value")
  public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public WebsiteTableRow value(String value) {
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
    WebsiteTableRow websiteTableRow = (WebsiteTableRow) o;
    return Objects.equals(this.desc, websiteTableRow.desc) &&
        Objects.equals(this.value, websiteTableRow.value);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}


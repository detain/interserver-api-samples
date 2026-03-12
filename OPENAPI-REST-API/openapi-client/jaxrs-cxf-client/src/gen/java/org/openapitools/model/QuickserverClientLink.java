package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A navigation link for QuickServer-related actions in the client portal.
 */
@ApiModel(description="A navigation link for QuickServer-related actions in the client portal.")

public class QuickserverClientLink  {
  
 /**
  * Link label
  */
  @ApiModelProperty(example = "Invoices", value = "Link label")

  private String label;

 /**
  * Link
  */
  @ApiModelProperty(example = "invoices", value = "Link")

  private String link;

 /**
  * Icon class
  */
  @ApiModelProperty(example = "fas fa-file-invoice-dollar fa-w-12", value = "Icon class")

  private String icon;

 /**
  * Icon text
  */
  @ApiModelProperty(example = "", value = "Icon text")

  private String iconText;

 /**
  * Help text
  */
  @ApiModelProperty(example = "Invoice History", value = "Help text")

  private String helpText;

 /**
  * Other attribute
  */
  @ApiModelProperty(value = "Other attribute")

  private String otherAttr;
 /**
   * Link label
   * @return label
  **/
  @JsonProperty("label")
  public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public QuickserverClientLink label(String label) {
    this.label = label;
    return this;
  }

 /**
   * Link
   * @return link
  **/
  @JsonProperty("link")
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public QuickserverClientLink link(String link) {
    this.link = link;
    return this;
  }

 /**
   * Icon class
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public QuickserverClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Icon text
   * @return iconText
  **/
  @JsonProperty("icon_text")
  public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public QuickserverClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

 /**
   * Help text
   * @return helpText
  **/
  @JsonProperty("help_text")
  public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public QuickserverClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

 /**
   * Other attribute
   * @return otherAttr
  **/
  @JsonProperty("other_attr")
  public String getOtherAttr() {
    return otherAttr;
  }

  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }

  public QuickserverClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
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
    QuickserverClientLink quickserverClientLink = (QuickserverClientLink) o;
    return Objects.equals(this.label, quickserverClientLink.label) &&
        Objects.equals(this.link, quickserverClientLink.link) &&
        Objects.equals(this.icon, quickserverClientLink.icon) &&
        Objects.equals(this.iconText, quickserverClientLink.iconText) &&
        Objects.equals(this.helpText, quickserverClientLink.helpText) &&
        Objects.equals(this.otherAttr, quickserverClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
    sb.append("    otherAttr: ").append(toIndentedString(otherAttr)).append("\n");
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


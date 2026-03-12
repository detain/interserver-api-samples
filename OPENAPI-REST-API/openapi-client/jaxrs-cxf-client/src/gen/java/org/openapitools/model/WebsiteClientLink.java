package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A navigation link for webhosting-related actions in the client portal.
 */
@ApiModel(description="A navigation link for webhosting-related actions in the client portal.")

public class WebsiteClientLink  {
  
 /**
  * Label for the link
  */
  @ApiModelProperty(value = "Label for the link")

  private String label;

 /**
  * Link URL
  */
  @ApiModelProperty(value = "Link URL")

  private String link;

 /**
  * Icon for the link
  */
  @ApiModelProperty(value = "Icon for the link")

  private String icon;

 /**
  * Icon text for the link
  */
  @ApiModelProperty(value = "Icon text for the link")

  private String iconText;

 /**
  * Help text for the link
  */
  @ApiModelProperty(value = "Help text for the link")

  private String helpText;

 /**
  * Other attributes for the link
  */
  @ApiModelProperty(value = "Other attributes for the link")

  private String otherAttr;
 /**
   * Label for the link
   * @return label
  **/
  @JsonProperty("label")
  public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public WebsiteClientLink label(String label) {
    this.label = label;
    return this;
  }

 /**
   * Link URL
   * @return link
  **/
  @JsonProperty("link")
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public WebsiteClientLink link(String link) {
    this.link = link;
    return this;
  }

 /**
   * Icon for the link
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public WebsiteClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Icon text for the link
   * @return iconText
  **/
  @JsonProperty("icon_text")
  public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public WebsiteClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

 /**
   * Help text for the link
   * @return helpText
  **/
  @JsonProperty("help_text")
  public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public WebsiteClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

 /**
   * Other attributes for the link
   * @return otherAttr
  **/
  @JsonProperty("other_attr")
  public String getOtherAttr() {
    return otherAttr;
  }

  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }

  public WebsiteClientLink otherAttr(String otherAttr) {
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
    WebsiteClientLink websiteClientLink = (WebsiteClientLink) o;
    return Objects.equals(this.label, websiteClientLink.label) &&
        Objects.equals(this.link, websiteClientLink.link) &&
        Objects.equals(this.icon, websiteClientLink.icon) &&
        Objects.equals(this.iconText, websiteClientLink.iconText) &&
        Objects.equals(this.helpText, websiteClientLink.helpText) &&
        Objects.equals(this.otherAttr, websiteClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteClientLink {\n");
    
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


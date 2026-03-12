package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetScrubIpDetails200ResponseClientLinksInner  {
  
  @ApiModelProperty(value = "")

  private String label;

  @ApiModelProperty(value = "")

  private String link;

  @ApiModelProperty(value = "")

  private String icon;

  @ApiModelProperty(value = "")

  private String iconText;

  @ApiModelProperty(value = "")

  private String helpText;

  @ApiModelProperty(value = "")

  private String otherAttr;
 /**
   * Get label
   * @return label
  **/
  @JsonProperty("label")
  public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public GetScrubIpDetails200ResponseClientLinksInner label(String label) {
    this.label = label;
    return this;
  }

 /**
   * Get link
   * @return link
  **/
  @JsonProperty("link")
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public GetScrubIpDetails200ResponseClientLinksInner link(String link) {
    this.link = link;
    return this;
  }

 /**
   * Get icon
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public GetScrubIpDetails200ResponseClientLinksInner icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Get iconText
   * @return iconText
  **/
  @JsonProperty("icon_text")
  public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public GetScrubIpDetails200ResponseClientLinksInner iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

 /**
   * Get helpText
   * @return helpText
  **/
  @JsonProperty("help_text")
  public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public GetScrubIpDetails200ResponseClientLinksInner helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

 /**
   * Get otherAttr
   * @return otherAttr
  **/
  @JsonProperty("other_attr")
  public String getOtherAttr() {
    return otherAttr;
  }

  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }

  public GetScrubIpDetails200ResponseClientLinksInner otherAttr(String otherAttr) {
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
    GetScrubIpDetails200ResponseClientLinksInner getScrubIpDetails200ResponseClientLinksInner = (GetScrubIpDetails200ResponseClientLinksInner) o;
    return Objects.equals(this.label, getScrubIpDetails200ResponseClientLinksInner.label) &&
        Objects.equals(this.link, getScrubIpDetails200ResponseClientLinksInner.link) &&
        Objects.equals(this.icon, getScrubIpDetails200ResponseClientLinksInner.icon) &&
        Objects.equals(this.iconText, getScrubIpDetails200ResponseClientLinksInner.iconText) &&
        Objects.equals(this.helpText, getScrubIpDetails200ResponseClientLinksInner.helpText) &&
        Objects.equals(this.otherAttr, getScrubIpDetails200ResponseClientLinksInner.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetScrubIpDetails200ResponseClientLinksInner {\n");
    
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


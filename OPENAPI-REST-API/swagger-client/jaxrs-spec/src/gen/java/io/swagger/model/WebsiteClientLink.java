package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A navigation link for webhosting-related actions in the client portal.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A navigation link for webhosting-related actions in the client portal.")

public class WebsiteClientLink   {

  private @Valid String label = null;

  private @Valid String link = null;

  private @Valid String icon = null;

  private @Valid String iconText = null;

  private @Valid String helpText = null;

  private @Valid String otherAttr = null;

  /**
   * Label for the link
   **/
  public WebsiteClientLink label(String label) {
    this.label = label;
    return this;
  }

  
  @ApiModelProperty(value = "Label for the link")
  @JsonProperty("label")
  @NotNull

  public String getLabel() {
    return label;
  }
  public void setLabel(String label) {
    this.label = label;
  }

  /**
   * Link URL
   **/
  public WebsiteClientLink link(String link) {
    this.link = link;
    return this;
  }

  
  @ApiModelProperty(value = "Link URL")
  @JsonProperty("link")
  @NotNull

  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

  /**
   * Icon for the link
   **/
  public WebsiteClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  @ApiModelProperty(value = "Icon for the link")
  @JsonProperty("icon")
  @NotNull

  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Icon text for the link
   **/
  public WebsiteClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  
  @ApiModelProperty(value = "Icon text for the link")
  @JsonProperty("icon_text")
  @NotNull

  public String getIconText() {
    return iconText;
  }
  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  /**
   * Help text for the link
   **/
  public WebsiteClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  
  @ApiModelProperty(value = "Help text for the link")
  @JsonProperty("help_text")
  @NotNull

  public String getHelpText() {
    return helpText;
  }
  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  /**
   * Other attributes for the link
   **/
  public WebsiteClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
    return this;
  }

  
  @ApiModelProperty(value = "Other attributes for the link")
  @JsonProperty("other_attr")
  @NotNull

  public String getOtherAttr() {
    return otherAttr;
  }
  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteClientLink websiteClientLink = (WebsiteClientLink) o;
    return Objects.equals(label, websiteClientLink.label) &&
        Objects.equals(link, websiteClientLink.link) &&
        Objects.equals(icon, websiteClientLink.icon) &&
        Objects.equals(iconText, websiteClientLink.iconText) &&
        Objects.equals(helpText, websiteClientLink.helpText) &&
        Objects.equals(otherAttr, websiteClientLink.otherAttr);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

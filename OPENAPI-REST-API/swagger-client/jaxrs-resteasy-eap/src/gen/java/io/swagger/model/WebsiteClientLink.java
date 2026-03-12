package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A navigation link for webhosting-related actions in the client portal.")

public class WebsiteClientLink   {
  private String label = null;
  private String link = null;
  private String icon = null;
  private String iconText = null;
  private String helpText = null;
  private String otherAttr = null;

  /**
   * Label for the link
   **/
  
  @Schema(description = "Label for the link")
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
  
  @Schema(description = "Link URL")
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
  
  @Schema(description = "Icon for the link")
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
  
  @Schema(description = "Icon text for the link")
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
  
  @Schema(description = "Help text for the link")
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
  
  @Schema(description = "Other attributes for the link")
  @JsonProperty("other_attr")
  @NotNull
  public String getOtherAttr() {
    return otherAttr;
  }
  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A navigation link for VPS-related actions in the client portal.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A navigation link for VPS-related actions in the client portal.")

public class VpsClientLink   {

  private @Valid String label = null;

  private @Valid String link = null;

  private @Valid String icon = null;

  private @Valid String iconText = null;

  private @Valid String helpText = null;

  /**
   * Display label for the link.
   **/
  public VpsClientLink label(String label) {
    this.label = label;
    return this;
  }

  
  @ApiModelProperty(value = "Display label for the link.")
  @JsonProperty("label")
  @NotNull

  public String getLabel() {
    return label;
  }
  public void setLabel(String label) {
    this.label = label;
  }

  /**
   * URL or route for the action.
   **/
  public VpsClientLink link(String link) {
    this.link = link;
    return this;
  }

  
  @ApiModelProperty(value = "URL or route for the action.")
  @JsonProperty("link")
  @NotNull

  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

  /**
   * Icon class for the link.
   **/
  public VpsClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  @ApiModelProperty(value = "Icon class for the link.")
  @JsonProperty("icon")
  @NotNull

  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Icon text label.
   **/
  public VpsClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  
  @ApiModelProperty(value = "Icon text label.")
  @JsonProperty("icon_text")
  @NotNull

  public String getIconText() {
    return iconText;
  }
  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  /**
   * Help tooltip text for the link.
   **/
  public VpsClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  
  @ApiModelProperty(value = "Help tooltip text for the link.")
  @JsonProperty("help_text")
  @NotNull

  public String getHelpText() {
    return helpText;
  }
  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsClientLink vpsClientLink = (VpsClientLink) o;
    return Objects.equals(label, vpsClientLink.label) &&
        Objects.equals(link, vpsClientLink.link) &&
        Objects.equals(icon, vpsClientLink.icon) &&
        Objects.equals(iconText, vpsClientLink.iconText) &&
        Objects.equals(helpText, vpsClientLink.helpText);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
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

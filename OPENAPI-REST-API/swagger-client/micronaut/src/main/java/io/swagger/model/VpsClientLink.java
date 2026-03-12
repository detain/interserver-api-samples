package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A navigation link for VPS-related actions in the client portal.
 */
@Schema(description = "A navigation link for VPS-related actions in the client portal.")
@Validated
@Introspected

public class VpsClientLink   {
  @JsonProperty("label")
  private String label = null;

  @JsonProperty("link")
  private String link = null;

  @JsonProperty("icon")
  private String icon = null;

  @JsonProperty("icon_text")
  private String iconText = null;

  @JsonProperty("help_text")
  private String helpText = null;

  public VpsClientLink label(String label) {
    this.label = label;
    return this;
  }

  /**
   * Display label for the link.
   * @return label
  **/
  @Schema(description = "Display label for the link.")
  @NotNull

  public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public VpsClientLink link(String link) {
    this.link = link;
    return this;
  }

  /**
   * URL or route for the action.
   * @return link
  **/
  @Schema(description = "URL or route for the action.")
  @NotNull

  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public VpsClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  /**
   * Icon class for the link.
   * @return icon
  **/
  @Schema(description = "Icon class for the link.")
  @NotNull

  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public VpsClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  /**
   * Icon text label.
   * @return iconText
  **/
  @Schema(description = "Icon text label.")
  @NotNull

  public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public VpsClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  /**
   * Help tooltip text for the link.
   * @return helpText
  **/
  @Schema(description = "Help tooltip text for the link.")
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
    return Objects.equals(this.label, vpsClientLink.label) &&
        Objects.equals(this.link, vpsClientLink.link) &&
        Objects.equals(this.icon, vpsClientLink.icon) &&
        Objects.equals(this.iconText, vpsClientLink.iconText) &&
        Objects.equals(this.helpText, vpsClientLink.helpText);
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

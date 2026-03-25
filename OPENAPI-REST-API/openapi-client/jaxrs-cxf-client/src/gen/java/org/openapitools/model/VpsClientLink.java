package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A navigation link for VPS-related actions in the client portal.
 */
@ApiModel(description="A navigation link for VPS-related actions in the client portal.")

public class VpsClientLink  {
  
 /**
  * Display label for the link.
  */
  @ApiModelProperty(value = "Display label for the link.")

  private String label;

 /**
  * URL or route for the action.
  */
  @ApiModelProperty(value = "URL or route for the action.")

  private String link;

 /**
  * Icon class for the link.
  */
  @ApiModelProperty(value = "Icon class for the link.")

  private String icon;

 /**
  * Icon text label.
  */
  @ApiModelProperty(value = "Icon text label.")

  private String iconText;

 /**
  * Help tooltip text for the link.
  */
  @ApiModelProperty(value = "Help tooltip text for the link.")

  private String helpText;
 /**
   * Display label for the link.
   * @return label
  **/
  @JsonProperty("label")
  public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public VpsClientLink label(String label) {
    this.label = label;
    return this;
  }

 /**
   * URL or route for the action.
   * @return link
  **/
  @JsonProperty("link")
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public VpsClientLink link(String link) {
    this.link = link;
    return this;
  }

 /**
   * Icon class for the link.
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public VpsClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Icon text label.
   * @return iconText
  **/
  @JsonProperty("icon_text")
  public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public VpsClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

 /**
   * Help tooltip text for the link.
   * @return helpText
  **/
  @JsonProperty("help_text")
  public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public VpsClientLink helpText(String helpText) {
    this.helpText = helpText;
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}


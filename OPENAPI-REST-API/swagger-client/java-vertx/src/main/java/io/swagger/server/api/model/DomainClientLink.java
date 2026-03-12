package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Links and labels for domain-related UI actions.
 */




public class DomainClientLink   {
  private String label = null;

  private String link = null;

  private String icon = null;

  private String iconText = null;

  private String helpText = null;

  public DomainClientLink label(String label) {
    this.label = label;
    return this;
  }

  /**
   * Get label
   * @return label
   **/
    public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public DomainClientLink link(String link) {
    this.link = link;
    return this;
  }

  /**
   * Get link
   * @return link
   **/
    public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public DomainClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  /**
   * Get icon
   * @return icon
   **/
    public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public DomainClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  /**
   * Get iconText
   * @return iconText
   **/
    public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public DomainClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  /**
   * Get helpText
   * @return helpText
   **/
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
    DomainClientLink domainClientLink = (DomainClientLink) o;
    return Objects.equals(this.label, domainClientLink.label) &&
        Objects.equals(this.link, domainClientLink.link) &&
        Objects.equals(this.icon, domainClientLink.icon) &&
        Objects.equals(this.iconText, domainClientLink.iconText) &&
        Objects.equals(this.helpText, domainClientLink.helpText);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainClientLink {\n");
    
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

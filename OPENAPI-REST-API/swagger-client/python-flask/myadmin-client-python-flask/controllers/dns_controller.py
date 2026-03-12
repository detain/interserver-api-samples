import connexion
import six

from myadmin-client-python-flask.models.dns_list_item import DnsListItem  # noqa: E501
from myadmin-client-python-flask.models.dns_new_domain import DnsNewDomain  # noqa: E501
from myadmin-client-python-flask.models.dns_new_record import DnsNewRecord  # noqa: E501
from myadmin-client-python-flask.models.dns_record import DnsRecord  # noqa: E501
from myadmin-client-python-flask.models.dns_record_type import DnsRecordType  # noqa: E501
from myadmin-client-python-flask.models.dns_update_record import DnsUpdateRecord  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask import util


def add_dns_domain(domain, ip):  # noqa: E501
    """Create DNS Domain

    Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation. # noqa: E501

    :param domain: 
    :type domain: str
    :param ip: 
    :type ip: str

    :rtype: None
    """
    return 'do some magic!'


def add_dns_domain(body):  # noqa: E501
    """Create DNS Domain

    Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: None
    """
    if connexion.request.is_json:
        body = DnsNewDomain.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def add_dns_record(name, type, content, ttl, prio, id):  # noqa: E501
    """Add DNS Record to Domain

    Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created. # noqa: E501

    :param name: 
    :type name: str
    :param type: 
    :type type: dict | bytes
    :param content: 
    :type content: str
    :param ttl: 
    :type ttl: int
    :param prio: 
    :type prio: int
    :param id: The DNS Domain ID.
    :type id: str

    :rtype: None
    """
    if connexion.request.is_json:
        type = DnsRecordType.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def add_dns_record(body, id):  # noqa: E501
    """Add DNS Record to Domain

    Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The DNS Domain ID.
    :type id: str

    :rtype: None
    """
    if connexion.request.is_json:
        body = DnsNewRecord.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def delete_dns_domain(id):  # noqa: E501
    """Delete DNS Domain

    Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately. # noqa: E501

    :param id: The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
    :type id: str

    :rtype: None
    """
    return 'do some magic!'


def delete_dns_record(domain_id, record_id):  # noqa: E501
    """Delete DNS Record

    Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed. # noqa: E501

    :param domain_id: The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
    :type domain_id: int
    :param record_id: The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
    :type record_id: int

    :rtype: None
    """
    return 'do some magic!'


def get_dns_domain(id):  # noqa: E501
    """List Domain DNS Records

    Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records. # noqa: E501

    :param id: The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
    :type id: int

    :rtype: List[DnsRecord]
    """
    return 'do some magic!'


def get_dns_list():  # noqa: E501
    """List DNS Domains

    Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records. # noqa: E501


    :rtype: List[DnsListItem]
    """
    return 'do some magic!'


def update_dns_record(name, type, content, ttl, prio, disabled, ordername, auth, domain_id, record_id):  # noqa: E501
    """Update DNS Record

    Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately. # noqa: E501

    :param name: 
    :type name: str
    :param type: 
    :type type: dict | bytes
    :param content: 
    :type content: str
    :param ttl: 
    :type ttl: str
    :param prio: 
    :type prio: str
    :param disabled: 
    :type disabled: str
    :param ordername: 
    :type ordername: str
    :param auth: 
    :type auth: str
    :param domain_id: The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
    :type domain_id: int
    :param record_id: The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
    :type record_id: int

    :rtype: None
    """
    if connexion.request.is_json:
        type = DnsRecordType.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_dns_record(body, domain_id, record_id):  # noqa: E501
    """Update DNS Record

    Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately. # noqa: E501

    :param body: The request data to update a dns record.
    :type body: dict | bytes
    :param domain_id: The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
    :type domain_id: int
    :param record_id: The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
    :type record_id: int

    :rtype: None
    """
    if connexion.request.is_json:
        body = DnsUpdateRecord.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'

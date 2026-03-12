(ns inter-server-management-api.specs.scrub-ips-row-schema
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def scrub-ips-row-schema-data
  {
   (ds/opt :scrub_ip_id) int?
   (ds/opt :repeat_invoices_cost) float?
   (ds/opt :scrub_ip_ip) string?
   (ds/opt :scrub_ip_status) string?
   (ds/opt :services_name) string?
   })

(def scrub-ips-row-schema-spec
  (ds/spec
    {:name ::scrub-ips-row-schema
     :spec scrub-ips-row-schema-data}))

(ns inter-server-management-api.specs.vps-service-addons
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-service-addons-data
  {
   (ds/opt :has_cpanel) boolean?
   (ds/opt :has_directadmin) boolean?
   (ds/opt :has_fantastico) boolean?
   (ds/opt :has_softaculous) boolean?
   (ds/opt :has_hdspace) boolean?
   (ds/opt :dedicated_ip) boolean?
   (ds/opt :extra_ips) (s/coll-of string?)
   (ds/opt :extra_ips6) (s/coll-of string?)
   (ds/opt :unpaid_ips) (s/coll-of string?)
   (ds/opt :ips) (s/coll-of string?)
   (ds/opt :ips6) (s/coll-of string?)
   (ds/opt :cpanel_id) int?
   (ds/opt :cost) int?
   (ds/opt :ids) (s/coll-of string?)
   (ds/opt :rdata) (s/coll-of string?)
   })

(def vps-service-addons-spec
  (ds/spec
    {:name ::vps-service-addons
     :spec vps-service-addons-data}))

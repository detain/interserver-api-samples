(ns inter-server-management-api.specs.domain-nameserver-get-response-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-nameserver-get-response-inner-data
  {
   (ds/req :name) string?
   (ds/req :ipaddress) string?
   (ds/req :can_delete) string?
   })

(def domain-nameserver-get-response-inner-spec
  (ds/spec
    {:name ::domain-nameserver-get-response-inner
     :spec domain-nameserver-get-response-inner-data}))

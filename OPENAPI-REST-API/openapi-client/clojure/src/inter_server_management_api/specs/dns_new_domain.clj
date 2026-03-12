(ns inter-server-management-api.specs.dns-new-domain
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def dns-new-domain-data
  {
   (ds/req :domain) string?
   (ds/req :ip) string?
   })

(def dns-new-domain-spec
  (ds/spec
    {:name ::dns-new-domain
     :spec dns-new-domain-data}))

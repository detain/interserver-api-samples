(ns inter-server-management-api.specs.domain-name-server
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-name-server-data
  {
   (ds/opt :sortorder) string?
   (ds/opt :name) string?
   (ds/opt :ipaddress) string?
   })

(def domain-name-server-spec
  (ds/spec
    {:name ::domain-name-server
     :spec domain-name-server-data}))

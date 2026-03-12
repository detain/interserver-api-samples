(ns inter-server-management-api.specs.server-switchport
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-switchport-data
  {
   (ds/req :switchport_id) int?
   (ds/req :switch_id) string?
   (ds/req :switch) string?
   (ds/req :port) string?
   (ds/req :blade) string?
   (ds/req :justport) string?
   (ds/req :graph_id) string?
   (ds/req :asset_id) int?
   (ds/opt :vlans) (s/coll-of string?)
   (ds/opt :vlans6) (s/coll-of string?)
   })

(def server-switchport-spec
  (ds/spec
    {:name ::server-switchport
     :spec server-switchport-data}))

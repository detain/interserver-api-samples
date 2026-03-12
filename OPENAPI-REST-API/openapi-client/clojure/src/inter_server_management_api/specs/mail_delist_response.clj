(ns inter-server-management-api.specs.mail-delist-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-delist-response-data
  {
   (ds/opt :id) int?
   (ds/opt :local) (s/coll-of any?)
   (ds/opt :mbtrap) (s/coll-of any?)
   (ds/opt :subject) (s/coll-of any?)
   (ds/opt :manual) (s/coll-of any?)
   })

(def mail-delist-response-spec
  (ds/spec
    {:name ::mail-delist-response
     :spec mail-delist-response-data}))

(ns inter-server-management-api.specs.mail-delist-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-delist-request-data
  {
   (ds/opt :unblock) string?
   })

(def mail-delist-request-spec
  (ds/spec
    {:name ::mail-delist-request
     :spec mail-delist-request-data}))

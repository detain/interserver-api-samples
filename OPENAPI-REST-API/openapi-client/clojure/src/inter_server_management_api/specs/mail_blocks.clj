(ns inter-server-management-api.specs.mail-blocks
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.mail-block-click-house :refer :all]
            [inter-server-management-api.specs.mail-block-click-house :refer :all]
            [inter-server-management-api.specs.mail-block-rspamd :refer :all]
            )
  (:import (java.io File)))


(def mail-blocks-data
  {
   (ds/req :local) (s/coll-of mail-block-click-house-spec)
   (ds/req :mbtrap) (s/coll-of mail-block-click-house-spec)
   (ds/req :subject) (s/coll-of mail-block-rspamd-spec)
   })

(def mail-blocks-spec
  (ds/spec
    {:name ::mail-blocks
     :spec mail-blocks-data}))
